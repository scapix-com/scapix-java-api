// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class LookupTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::LookupTable>
{
	static constexpr fixed_string class_name = "java/awt/image/LookupTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::LookupTable : public jni::object_base<"java/awt/image/LookupTable",
	java::lang::Object>
{
public:

	jint getNumComponents() { return call_method<"getNumComponents", jint>(); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	jni::ref<jni::array<jint>> lookupPixel(jni::ref<jni::array<jint>> p1, jni::ref<jni::array<jint>> p2) { return call_method<"lookupPixel", jni::ref<jni::array<jint>>>(p1, p2); }

protected:

	LookupTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_LOOKUPTABLE