// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class Utility; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::Utility>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/Utility";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::icu::impl::Utility : public jni::object_base<"jdk/internal/icu/impl/Utility",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::icu::impl::Utility> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> escape(jni::ref<java::lang::String> s) { return call_static_method<"escape", jni::ref<java::lang::String>>(s); }
	static jint unescapeAt(jni::ref<java::lang::String> s, jni::ref<jni::array<jint>> offset16) { return call_static_method<"unescapeAt", jint>(s, offset16); }
	static jni::ref<java::lang::String> hex(jlong i, jint p2) { return call_static_method<"hex", jni::ref<java::lang::String>>(i, p2); }
	static jboolean isUnprintable(jint c) { return call_static_method<"isUnprintable", jboolean>(c); }
	static jboolean escapeUnprintable(jni::ref<java::lang::Appendable> result, jint c) { return call_static_method<"escapeUnprintable", jboolean>(result, c); }

protected:

	Utility(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UTILITY
