// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class Statement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::Statement>
{
	static constexpr fixed_string class_name = "java/beans/Statement";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT)
#define SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::Statement : public jni::object_base<"java/beans/Statement",
	java::lang::Object>
{
public:

	static jni::ref<java::beans::Statement> new_object(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::Object> getTarget() { return call_method<"getTarget", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getMethodName() { return call_method<"getMethodName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> getArguments() { return call_method<"getArguments", jni::ref<jni::array<java::lang::Object>>>(); }
	void execute() { return call_method<"execute", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Statement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_STATEMENT
