// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream_GetField.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectInputStream_GetFieldImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectInputStream_GetFieldImpl>
{
	static constexpr fixed_string class_name = "java/io/ObjectInputStream$GetFieldImpl";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream_GetField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectStreamClass.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectInputStream_GetFieldImpl : public jni::object_base<"java/io/ObjectInputStream$GetFieldImpl",
	java::io::ObjectInputStream_GetField>
{
public:

	jni::ref<java::io::ObjectStreamClass> getObjectStreamClass() { return call_method<"getObjectStreamClass", jni::ref<java::io::ObjectStreamClass>>(); }
	jboolean defaulted(jni::ref<java::lang::String> name) { return call_method<"defaulted", jboolean>(name); }
	jboolean get(jni::ref<java::lang::String> name, jboolean val) { return call_method<"get", jboolean>(name, val); }
	jbyte get(jni::ref<java::lang::String> name, jbyte val) { return call_method<"get", jbyte>(name, val); }
	jchar get(jni::ref<java::lang::String> name, jchar val) { return call_method<"get", jchar>(name, val); }
	jshort get(jni::ref<java::lang::String> name, jshort val) { return call_method<"get", jshort>(name, val); }
	jint get(jni::ref<java::lang::String> name, jint val) { return call_method<"get", jint>(name, val); }
	jfloat get(jni::ref<java::lang::String> name, jfloat val) { return call_method<"get", jfloat>(name, val); }
	jlong get(jni::ref<java::lang::String> name, jlong val) { return call_method<"get", jlong>(name, val); }
	jdouble get(jni::ref<java::lang::String> name, jdouble val) { return call_method<"get", jdouble>(name, val); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> val) { return call_method<"get", jni::ref<java::lang::Object>>(name, val); }

protected:

	ObjectInputStream_GetFieldImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTINPUTSTREAM_GETFIELDIMPL
