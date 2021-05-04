table_base_z = -0.488333
table_base_len = 0.03

z_target = table_base_len * 0.5

# base, leg, top
z_current = [table_base_z, 0.001667, 0.486667]

z_offset = [z_target + (z - table_base_z) for z in z_current]

print(z_offset)