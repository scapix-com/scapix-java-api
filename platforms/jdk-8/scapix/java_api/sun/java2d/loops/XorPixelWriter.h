// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/PixelWriter.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class XorPixelWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::XorPixelWriter>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/XorPixelWriter";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::PixelWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/loops/XorPixelWriter_ByteData.h>
#include <scapix/java_api/sun/java2d/loops/XorPixelWriter_ShortData.h>
#include <scapix/java_api/sun/java2d/loops/XorPixelWriter_IntData.h>
#include <scapix/java_api/sun/java2d/loops/XorPixelWriter_FloatData.h>
#include <scapix/java_api/sun/java2d/loops/XorPixelWriter_DoubleData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::XorPixelWriter : public jni::object_base<"sun/java2d/loops/XorPixelWriter",
	sun::java2d::loops::PixelWriter>
{
public:

	using ByteData = XorPixelWriter_ByteData;
	using ShortData = XorPixelWriter_ShortData;
	using IntData = XorPixelWriter_IntData;
	using FloatData = XorPixelWriter_FloatData;
	using DoubleData = XorPixelWriter_DoubleData;

	void writePixel(jint p1, jint p2) { return call_method<"writePixel", void>(p1, p2); }

protected:

	XorPixelWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORPIXELWRITER