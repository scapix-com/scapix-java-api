// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql { class CommonDataSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::CommonDataSource>
{
	static constexpr fixed_string class_name = "javax/sql/CommonDataSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE)
#define SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/PrintWriter.h>
#include <scapix/java_api/java/util/logging/Logger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::CommonDataSource : public jni::object_base<"javax/sql/CommonDataSource",
	java::lang::Object>
{
public:

	jni::ref<java::io::PrintWriter> getLogWriter() { return call_method<"getLogWriter", jni::ref<java::io::PrintWriter>>(); }
	void setLogWriter(jni::ref<java::io::PrintWriter> p1) { return call_method<"setLogWriter", void>(p1); }
	void setLoginTimeout(jint p1) { return call_method<"setLoginTimeout", void>(p1); }
	jint getLoginTimeout() { return call_method<"getLoginTimeout", jint>(); }
	jni::ref<java::util::logging::Logger> getParentLogger() { return call_method<"getParentLogger", jni::ref<java::util::logging::Logger>>(); }

protected:

	CommonDataSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_COMMONDATASOURCE