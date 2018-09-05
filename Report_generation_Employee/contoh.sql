-- phpMyAdmin SQL Dump
-- version 4.7.4
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Oct 27, 2017 at 08:26 PM
-- Server version: 10.1.26-MariaDB
-- PHP Version: 7.1.9

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `contoh`
--

-- --------------------------------------------------------

--
-- Table structure for table `karyawan`
--

CREATE TABLE `karyawan` (
  `nik` varchar(10) NOT NULL,
  `nama` varchar(50) NOT NULL,
  `tempat_lahir` varchar(30) NOT NULL,
  `tanggal_lahir` varchar(30) NOT NULL,
  `alamat` varchar(50) NOT NULL,
  `no_telepon` varchar(10) NOT NULL,
  `jabatan` varchar(15) NOT NULL,
  `status` varchar(15) NOT NULL,
  `username` varchar(15) NOT NULL,
  `password` varchar(15) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `karyawan`
--

INSERT INTO `karyawan` (`nik`, `nama`, `tempat_lahir`, `tanggal_lahir`, `alamat`, `no_telepon`, `jabatan`, `status`, `username`, `password`) VALUES
('20150001', 'Nihal Kashyap', 'Gaya', '1997-03-26', 'Gaya,Bihar', '8100726314', 'Manager', 'Tetap', 'hakkobio', '7ebe6954011b681'),
('20150002', 'Dede Rizki ramadhan', 'Bekasi', '1992-05-19', 'Pilar Timur - Cikarang Utara - Bekasi', '0856737876', 'Leader', 'Kontrak', 'dederizki', '5dae07cbc788d00'),
('20150003', 'Ujang Walim', 'Bekasi', '1988-06-08', 'Sukatani - Cikarang - Bekasi', '0865437823', 'Supervisor', 'Kontrak', 'ujangaji', '6104955561ae5eb'),
('20150004', 'Anton Sugianto', 'Indramayu', '1989-02-02', 'Pilar Timur - Cikarang Utara - Bekasi', '0857345267', 'Supervisor', 'Tetap', 'antons', 'b9aa245ffdfe791'),
('20150005', 'Dimas Kaliari S', 'Brebes', '1985-07-11', 'Warung Bingung - Sukatani ', '0856765435', 'Leader', 'Tetap', 'dimask', 'c6cab3e97b69d13'),
('20150006', 'Dony Arianto', 'Bekasi', '1990-02-14', 'Cikarang Utara - Bekasi', '0856747837', 'Supervisor', 'Kontrak', 'donnya', '5a5beb64f54ffd4'),
('20150007', 'Hendra Rombe', 'Bekasi', '1980-08-13', 'Cikarang Utara - Bekasi', '0987631237', 'Supervisor', 'Tetap', 'hendra', 'a04cca766a88568'),
('20150008', 'Syahrul Rakhim', 'Padang', '1990-06-09', 'Cikarang Barat - Bekasi', '0856747646', 'Supervisor', 'Outsourcing', 'syahrul', '95ffb7a15f02c6c'),
('20150009', 'Bang Jali', 'Bekasi', '1990-07-19', 'Cikarang - Bekasi', '0856747483', 'Operator', 'Outsourcing', 'bangjali', 'eb12aa75673a699'),
('20150010', 'Bang Toyyib', 'Bekasi', '1989-02-08', 'Warung Bingung - Cikarang', '0987656789', 'Leader', 'Kontrak', 'toyyib', 'c583966c262d690');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `karyawan`
--
ALTER TABLE `karyawan`
  ADD PRIMARY KEY (`nik`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
