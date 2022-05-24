/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapmain.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 22:45:00 by smhah             #+#    #+#             */
/*   Updated: 2022/04/26 20:25:54 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "root.hpp"
# include <map>
// Driver Code
int main()
{
	std::map<char,int> mymap;
	
	mymap.insert ( std::pair<char,int>('7',100) );
  	mymap.insert ( std::pair<char,int>('3',200) );
	mymap.insert ( std::pair<char,int>('9',200) );
	mymap.insert ( std::pair<char,int>('5',200) );
	mymap.insert ( std::pair<char,int>('8',200) );
	std::map<char, int>::iterator it2 = mymap.end();
	
	//it2 = mymap.begin();
	std::cout << "it2 is " << it2->first << std::endl;
	it2--;
	std::cout << "it2 is " << it2->first << std::endl;
	ft::map<int, int> m;
	ft::pair<int, int> planet1;
	ft::pair<int, int> planet3;
	ft::pair<int, int> planet5;
	ft::pair<int, int> planet7;
	ft::pair<int, int> planet9;
	ft::pair<int, int> planet8;
	ft::map<int, int>::iterator it;

	
	//it = m.begin();
	//std::cout << "it 1 is " << it->first << std::endl;
	//std::cout << "*it = " << *it << std::endl;

	planet1 = ft::make_pair(1, 1);
	planet3 = ft::make_pair(3, 2);
	planet5 = ft::make_pair(5, 3);
	planet7 = ft::make_pair(7, 4);
	planet9 = ft::make_pair(9, 5);
	planet8 = ft::make_pair(8, 6);
	//std::cout << "string is "<< planet.first << " int is " << planet.second << std::endl;
	// root = m.insert(root, planet7, root);
	// root = m.insert(root, planet3, root);
	// root = m.insert(root, planet9, root);
	// root = m.insert(root, planet5, root);
	// root = m.insert(root, planet8, root);
	m.insert(planet7);
	m.insert(planet3);
	m.insert(planet9);
	m.insert(planet5);
	m.insert(planet8);
	//m.erase(planet9.first);
	//m.erase(9);

	
	it = m.end();
	--it;
	std::cout << "it is " << it->first << std::endl;
	std::cout << "is empty " << m.empty() << std::endl;
	// ++it;
	// std::cout << "it is " << it->first << std::endl;
	//root = m.deleteNode(root, planet9);
	
	// /* Constructing tree given in
	// the above figure */
	// root = insert(root, 10);
	// root = insert(root, 20);
	// root = insert(root, 30);
	// root = insert(root, 40);
	// root = insert(root, 50);
	// root = insert(root, 25);
	// root = insert(root, 26);
	// /* The constructed AVL Tree would be
	// 			30
	// 		/ \
	// 		20 40
	// 		/ \ \
	// 	10 25 50
	// */
	// std::cout << "Preorder traversal of the "
	// 		"constructed AVL tree is \n";
	//m.preOrder(root);
	m.printTree(m.get_root(), nullptr, false);
	return 0;
}

// This code is contributed by
// rathbhupendra