// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::png { class PNGImageDataEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::png::PNGImageDataEnumeration>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/png/PNGImageDataEnumeration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/javax/imageio/stream/ImageInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::imageio::plugins::png::PNGImageDataEnumeration : public jni::object_base<"com/sun/imageio/plugins/png/PNGImageDataEnumeration",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	static jni::ref<com::sun::imageio::plugins::png::PNGImageDataEnumeration> new_object(jni::ref<javax::imageio::stream::ImageInputStream> p1) { return base_::new_object(p1); }
	jni::ref<java::io::InputStream> nextElement() { return call_method<"nextElement", jni::ref<java::io::InputStream>>(); }
	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }

protected:

	PNGImageDataEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEDATAENUMERATION