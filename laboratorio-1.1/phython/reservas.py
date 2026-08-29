def hay_cupo(reservas: list, capacidad= 5):
    return len(reservas) <= capacidad
def mostrar_resumen(reservas: list, capacidad = 5):
    print("Resumen de reservas")
    print(f"Reservas realizadas: {len(reservas)}/{capacidad}")
    for p in reservas:
        print(p)
r2 = []
while hay_cupo(r2):
    invitado = input("Ingrese el nombre del invitado o si desea salir: ")
    if invitado == "salir":
        break
    r2.append(invitado)

mostrar_resumen(r2)



