// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class Norm2AllModes_NFCSingleton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::Norm2AllModes_NFCSingleton>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/Norm2AllModes$NFCSingleton";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::impl::Norm2AllModes_NFCSingleton : public jni::object_base<"jdk/internal/icu/impl/Norm2AllModes$NFCSingleton",
	java::lang::Object>
{
public:


protected:

	Norm2AllModes_NFCSingleton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_NORM2ALLMODES_NFCSINGLETON
