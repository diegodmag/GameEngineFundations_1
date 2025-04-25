# Variables
CXX = g++ ## Compilador
CXXFLAGS = -std=c++17 -Wall -Wextra ## Banderas de compilador 
# -std=c++17: Le dices al compilador que use el standar C++ 17 
# -Wall: Muestra las advertencias importantes 
# -Wextra: muestra advertencias adicionales que no incluye -Wall 

TARGET = main
OBJS = main.o Matrix3D.o Vector3D.o #Lista de archivos objeto (.o) se generan al compilar cada archivo .cpp por separado

# Regla por defecto
all: $(TARGET) #Se ejcuta con el make, le dices para construir all primero se ejecuta main

# Cómo compilar el ejecutable
$(TARGET): $(OBJS) #Regla para construir ejecutable final 
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Cómo compilar cada archivo .cpp a .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	@echo "Ejecutando ./$(TARGET)"
	@./$(TARGET)


# Limpieza del proyecto
clean:
	rm -f *.o $(TARGET)
