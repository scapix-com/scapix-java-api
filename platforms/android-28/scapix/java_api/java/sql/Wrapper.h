// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_WRAPPER_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_WRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class Wrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::Wrapper>
{
	static constexpr fixed_string class_name = "java/sql/Wrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_WRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_WRAPPER)
#define SCAPIX_JAVA_API_JAVA_SQL_WRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::Wrapper : public jni::object_base<"java/sql/Wrapper",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> unwrap(jni::ref<java::lang::Class> p1) { return call_method<"unwrap", jni::ref<java::lang::Object>>(p1); }
	jboolean isWrapperFor(jni::ref<java::lang::Class> p1) { return call_method<"isWrapperFor", jboolean>(p1); }

protected:

	Wrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_WRAPPER