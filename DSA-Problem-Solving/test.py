import matplotlib.pyplot as plt
import matplotlib.patches as patches

# Create figure
fig, ax = plt.subplots(figsize=(14, 10))
ax.set_xlim(0, 100)
ax.set_ylim(0, 100)

# Title
plt.title(
    "UltraTech Cement Works (Sidhi) - Engineering Layout Schematic",
    fontsize=14,
    fontweight='bold'
)

# -----------------------------
# North Zone (Mines)
# -----------------------------
ax.add_patch(
    patches.Rectangle(
        (10, 80), 80, 12,
        fill=True,
        color='#a3e4d7',
        ec='black'
    )
)

ax.text(
    50, 86,
    "NORTH ZONE: Captive Limestone Mines (Majhgawan/Hinauti)",
    ha='center',
    va='center',
    fontweight='bold'
)

# -----------------------------
# West Zone (Power Plant & Coal)
# -----------------------------
ax.add_patch(
    patches.Rectangle(
        (10, 25), 30, 50,
        fill=True,
        color='#fdebd0',
        ec='black'
    )
)

ax.text(
    25, 68,
    "WEST ZONE: Thermal Power Plant",
    ha='center',
    fontweight='bold'
)

ax.text(
    25, 50,
    "Coal Yard (Road Dumpers)\n"
    "Boilers & Turbines\n"
    "Cooling Towers\n"
    "Ash Handling Unit",
    ha='center',
    fontsize=9
)

# -----------------------------
# Central Substation
# -----------------------------
ax.add_patch(
    patches.Rectangle(
        (43, 40), 14, 20,
        fill=True,
        color='#f9e79f',
        ec='black'
    )
)

ax.text(
    50, 50,
    "Main Plant\nSubstation",
    ha='center',
    va='center',
    fontsize=9,
    fontweight='bold'
)

# -----------------------------
# East Zone (Cement Factory)
# -----------------------------
ax.add_patch(
    patches.Rectangle(
        (60, 25), 30, 50,
        fill=True,
        color='#d4efdf',
        ec='black'
    )
)

ax.text(
    75, 68,
    "EAST ZONE: Cement Factory",
    ha='center',
    fontweight='bold'
)

ax.text(
    75, 50,
    "Raw Mill & Kilns\n"
    "Cement Mills\n"
    "Packing Plant\n"
    "Storage Silos",
    ha='center',
    fontsize=9
)

# -----------------------------
# Railway Line (East)
# -----------------------------
ax.plot(
    [93, 93],
    [10, 80],
    color='black',
    linewidth=3,
    linestyle='--'
)

ax.text(
    95, 45,
    "Industrial Rail Siding Track (Outbound Cement)",
    rotation=270,
    va='center',
    fontsize=9,
    fontweight='bold'
)

# -----------------------------
# South Zone (Admin & Gates)
# -----------------------------
ax.add_patch(
    patches.Rectangle(
        (10, 5), 80, 15,
        fill=True,
        color='#eaeded',
        ec='black'
    )
)

ax.text(
    50, 15,
    "SOUTH ZONE: Administrative Complex & Main Gate",
    ha='center',
    fontweight='bold'
)

# -----------------------------
# Remove Axes
# -----------------------------
plt.axis('off')

# -----------------------------
# Save as PNG
# -----------------------------
plt.savefig(
    "ultratech_sidhi_layout.png",
    bbox_inches='tight',
    dpi=300
)

plt.show()

print("Image saved successfully as 'ultratech_sidhi_layout.png'!")