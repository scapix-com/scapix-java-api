// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class UBiDiProps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::UBiDiProps>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/UBiDiProps";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::UBiDiProps : public jni::object_base<"jdk/internal/icu/impl/UBiDiProps",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::icu::impl::UBiDiProps> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<jdk::internal::icu::impl::UBiDiProps>>(); }

	jint getClass(jint c) { return call_method<"getClass", jint>(c); }
	jint getMirror(jint c) { return call_method<"getMirror", jint>(c); }
	jint getJoiningType(jint c) { return call_method<"getJoiningType", jint>(c); }
	jint getJoiningGroup(jint c) { return call_method<"getJoiningGroup", jint>(c); }
	jint getPairedBracketType(jint c) { return call_method<"getPairedBracketType", jint>(c); }
	jint getPairedBracket(jint c) { return call_method<"getPairedBracket", jint>(c); }

protected:

	UBiDiProps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UBIDIPROPS
