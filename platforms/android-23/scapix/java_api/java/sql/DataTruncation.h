// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/sql/SQLWarning.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class DataTruncation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::DataTruncation>
{
	static constexpr fixed_string class_name = "java/sql/DataTruncation";
	using base_classes = std::tuple<scapix::java_api::java::sql::SQLWarning, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION)
#define SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::DataTruncation : public jni::object_base<"java/sql/DataTruncation",
	java::sql::SQLWarning,
	java::io::Serializable>
{
public:

	static jni::ref<java::sql::DataTruncation> new_object(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize) { return base_::new_object(index, parameter, read, dataSize, transferSize); }
	static jni::ref<java::sql::DataTruncation> new_object(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, jni::ref<java::lang::Throwable> cause) { return base_::new_object(index, parameter, read, dataSize, transferSize, cause); }
	jint getDataSize() { return call_method<"getDataSize", jint>(); }
	jint getIndex() { return call_method<"getIndex", jint>(); }
	jboolean getParameter() { return call_method<"getParameter", jboolean>(); }
	jboolean getRead() { return call_method<"getRead", jboolean>(); }
	jint getTransferSize() { return call_method<"getTransferSize", jint>(); }

protected:

	DataTruncation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_DATATRUNCATION
