import time, sys

heures = 1
minutes = 0
secondes = 0

total = heures * 3600 + minutes * 60 + secondes

while total >= 0:
   h = total // 3600
   m = (total % 3600) // 60
   s = total % 60

   sys.stdout.write(f"\r{h:02d}:{m:02d}:{s:02d}")
   sys.stdout.flush()
   time.sleep(1)
   total -= 1

print("\nTerminé !")
