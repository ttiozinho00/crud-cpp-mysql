--
-- Host: localhost:3306
-- Generation Time: Jun 23, 2022 at 23:54 PM
-- Server version:
-- PHP Version:

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `produtos`
--

CREATE DATABASE IF NOT EXISTS `produtos` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;

USE `produtos`;

-- --------------------------------------------------------

--
-- Table structure for table `product`
--

CREATE  TABLE `product` (
  `idproduct` INT NOT NULL AUTO_INCREMENT ,
  `name` VARCHAR(45) NOT NULL ,
  `price` FLOAT NOT NULL ,
  `created` DATETIME NOT NULL ,
  PRIMARY KEY (`idproduct`) 
);
