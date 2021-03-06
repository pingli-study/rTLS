% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/rotate3D.R
\name{rotate3D}
\alias{rotate3D}
\title{Rotate a Point Cloud}
\usage{
rotate3D(cloud, roll = 0, pitch = 0, yaw = 0, threads = 1)
}
\arguments{
\item{cloud}{A \code{data.table} with three columns describing the *XYZ* coordinates of a point cloud.}

\item{roll}{A \code{numeric} vector describing the degrees of rotation angles for roll (*X*).}

\item{pitch}{A \code{numeric} vector describing the degrees of rotation angles for pitch (*Y*).}

\item{yaw}{A \code{numeric} vector describing the degrees of rotation angles for yaw (*Z*). for the roll, pitch, and yaw.}

\item{threads}{An \code{integer} specifying the number of threads to use. Experiment to see what works best for your data on your hardware.}
}
\value{
A \code{data.table} with the rotation applied to \code{cloud}.
}
\description{
Rotate point cloud based on the roll, pitch, and yaw angles.
}
\details{
The *XYZ* coordinates are transformed to E-N-U coordinates (ENU system, East-North-Up).
}
\examples{

data(pc_tree)
rgl::plot3d(pc_tree)
rgl::plot3d(rotate3D(pc_tree, roll = 45, pitch = 45, yaw = 0))

}
\author{
J. Antonio Guzmán Q.
}
