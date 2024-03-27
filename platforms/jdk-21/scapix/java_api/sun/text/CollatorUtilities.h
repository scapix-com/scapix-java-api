// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class CollatorUtilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::CollatorUtilities>
{
	static constexpr fixed_string class_name = "sun/text/CollatorUtilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES)
#define SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/icu/text/NormalizerBase_Mode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::CollatorUtilities : public jni::object_base<"sun/text/CollatorUtilities",
	java::lang::Object>
{
public:

	static jni::ref<sun::text::CollatorUtilities> new_object() { return base_::new_object(); }
	static jint toLegacyMode(jni::ref<jdk::internal::icu::text::NormalizerBase_Mode> mode) { return call_static_method<"toLegacyMode", jint>(mode); }
	static jni::ref<jdk::internal::icu::text::NormalizerBase_Mode> toNormalizerMode(jint mode) { return call_static_method<"toNormalizerMode", jni::ref<jdk::internal::icu::text::NormalizerBase_Mode>>(mode); }

protected:

	CollatorUtilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_COLLATORUTILITIES
