#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Movimentacao.hpp"
#include "Item.hpp"
#include <map>
#include <vector>


class Inventario {
public:
  /// @brief Cadastra um item no inventario
  ///
  void cadastrarItem();

  /// @brief Remove um item do inventario
  ///
  void removerItem();
  
  /// @brief 
  ///
  void atualizarValor();

  /// @brief Adiciona uma quantiade de itens ao estoque
  ///
  void adicionarItens();

  /// @brief Retira uma quantiade de itens do estoque
  ///
  void retirarItens();

  /// @brief retorna um item presente no inventario
  ///
  Item& getItem(std::string& nome);

  /// @brief verifica se o item existe no inventário
  ///
  bool itemExiste(std::string nome);

  void adicionarMovimentacao(const std::string& nome, std::string tipo, int quantidade);

  void salvarDados(const Inventario& inventario, const std::string& nomeArquivo);

  void carregarDados(const std::string& nomeArquivo);
  
  /// @brief retorna o inventário
  ///
  const std::map<std::string, Item>& obterEstoque() const;

  const std::vector<Movimentacao>& obterHistorico() const;


private:
  std::map<std::string, Item> estoque;   
  std::vector<Movimentacao> historico;    
};

#endif