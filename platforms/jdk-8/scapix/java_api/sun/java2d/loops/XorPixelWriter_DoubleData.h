// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/XorPixelWriter.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class XorPixelWriter_DoubleData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::XorPixelWriter_DoubleData>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/XorPixelWriter$DoubleData";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::XorPixelWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::XorPixelWriter_DoubleData : public jni::object_base<"sun/java2d/loops/XorPixelWriter$DoubleData",
	sun::java2d::loops::XorPixelWriter>
{
public:


protected:

	XorPixelWriter_DoubleData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_DOUBLEDATA
