/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marine <marine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:50:01 by msanjuan          #+#    #+#             */
/*   Updated: 2021/02/16 22:16:04 by marine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{

    // definir les white spaces (i++ tant qu'on a ce genre de caract)

    // gérer les signes negatifs et positifs (si nombre impair de -,
    // signe devient negatif - à gérer avec le modulo)

    // dire que si cest pas compris entre 0 et 9, arrêter de boucler

    // convertir le resultat char to int avec *10 into table ascii ( - 48?)

    // multiplier le resultat par le signe obtenu
}

/*
** str peut commencer par un nombre arbitraire de ‘white space‘
**  The isspace() and isspace_l() functions test for whitespace characters.
**  In the C locale, the complete list of whitespace characters is:
**    ‘ ’ Space character.
**    \f  Form feed.
**    \n  New-line.
**    \r  Carriage return.
**    \t  Horizontal tab.
**    \v  And vertical tab.
*/