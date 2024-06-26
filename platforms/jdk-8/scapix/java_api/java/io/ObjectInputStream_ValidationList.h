// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectInputStream_ValidationList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectInputStream_ValidationList>
{
	static constexpr fixed_string class_name = "java/io/ObjectInputStream$ValidationList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectInputStream_ValidationList : public jni::object_base<"java/io/ObjectInputStream$ValidationList",
	java::lang::Object>
{
public:

	void clear() { return call_method<"clear", void>(); }

protected:

	ObjectInputStream_ValidationList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_VALIDATIONLIST
