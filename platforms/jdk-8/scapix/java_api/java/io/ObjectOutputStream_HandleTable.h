// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectOutputStream_HandleTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectOutputStream_HandleTable>
{
	static constexpr fixed_string class_name = "java/io/ObjectOutputStream$HandleTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectOutputStream_HandleTable : public jni::object_base<"java/io/ObjectOutputStream$HandleTable",
	java::lang::Object>
{
public:


protected:

	ObjectOutputStream_HandleTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_HANDLETABLE
