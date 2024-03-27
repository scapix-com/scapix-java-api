// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/MultipleGradientPaintContext.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class RadialGradientPaintContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::RadialGradientPaintContext>
{
	static constexpr fixed_string class_name = "java/awt/RadialGradientPaintContext";
	using base_classes = std::tuple<scapix::java_api::java::awt::MultipleGradientPaintContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT)
#define SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::RadialGradientPaintContext : public jni::object_base<"java/awt/RadialGradientPaintContext",
	java::awt::MultipleGradientPaintContext>
{
public:


protected:

	RadialGradientPaintContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_RADIALGRADIENTPAINTCONTEXT