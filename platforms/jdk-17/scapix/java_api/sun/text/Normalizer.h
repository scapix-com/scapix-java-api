// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class Normalizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::Normalizer>
{
	static constexpr fixed_string class_name = "sun/text/Normalizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Normalizer_Form.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::Normalizer : public jni::object_base<"sun/text/Normalizer",
	java::lang::Object>
{
public:

	static jint UNICODE_3_2() { return get_static_field<"UNICODE_3_2", jint>(); }

	static jni::ref<java::lang::String> normalize(jni::ref<java::lang::CharSequence> src, jni::ref<java::text::Normalizer_Form> form, jint option) { return call_static_method<"normalize", jni::ref<java::lang::String>>(src, form, option); }
	static jboolean isNormalized(jni::ref<java::lang::CharSequence> src, jni::ref<java::text::Normalizer_Form> form, jint option) { return call_static_method<"isNormalized", jboolean>(src, form, option); }
	static jint getCombiningClass(jint ch) { return call_static_method<"getCombiningClass", jint>(ch); }

protected:

	Normalizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER
