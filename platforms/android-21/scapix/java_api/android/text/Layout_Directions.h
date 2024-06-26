// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text { class Layout_Directions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::Layout_Directions>
{
	static constexpr fixed_string class_name = "android/text/Layout$Directions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS)
#define SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::Layout_Directions : public jni::object_base<"android/text/Layout$Directions",
	java::lang::Object>
{
public:


protected:

	Layout_Directions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_LAYOUT_DIRECTIONS
