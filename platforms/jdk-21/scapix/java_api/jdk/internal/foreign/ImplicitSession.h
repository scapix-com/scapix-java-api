// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/SharedSession.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign { class ImplicitSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::ImplicitSession>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/ImplicitSession";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::SharedSession>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ref/Cleaner.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::ImplicitSession : public jni::object_base<"jdk/internal/foreign/ImplicitSession",
	jdk::internal::foreign::SharedSession>
{
public:

	static jni::ref<jdk::internal::foreign::ImplicitSession> new_object(jni::ref<java::lang::ref::Cleaner> cleaner) { return base_::new_object(cleaner); }
	void release0() { return call_method<"release0", void>(); }
	void acquire0() { return call_method<"acquire0", void>(); }
	jboolean isCloseable() { return call_method<"isCloseable", jboolean>(); }
	void justClose() { return call_method<"justClose", void>(); }

protected:

	ImplicitSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_IMPLICITSESSION
