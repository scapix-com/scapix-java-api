// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class ICUBinary_Authenticate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::ICUBinary_Authenticate>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/ICUBinary$Authenticate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::ICUBinary_Authenticate : public jni::object_base<"jdk/internal/icu/impl/ICUBinary$Authenticate",
	java::lang::Object>
{
public:

	jboolean isDataVersionAcceptable(jni::ref<jni::array<jbyte>> p1) { return call_method<"isDataVersionAcceptable", jboolean>(p1); }

protected:

	ICUBinary_Authenticate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_ICUBINARY_AUTHENTICATE
