{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
  buildInputs = [
    pkgs.cmake
    pkgs.gcc
    pkgs.jdk  # или конкретная версия, например pkgs.jdk8
  ];
  
  # Установка JAVA_HOME для сборки
  shellHook = ''
    export JAVA_HOME=${pkgs.jdk}/lib/openjdk
  '';
}

