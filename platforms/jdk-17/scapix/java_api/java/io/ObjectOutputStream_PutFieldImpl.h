// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectOutputStream_PutField.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectOutputStream_PutFieldImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectOutputStream_PutFieldImpl>
{
	static constexpr fixed_string class_name = "java/io/ObjectOutputStream$PutFieldImpl";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectOutputStream_PutField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::ObjectOutputStream_PutFieldImpl : public jni::object_base<"java/io/ObjectOutputStream$PutFieldImpl",
	java::io::ObjectOutputStream_PutField>
{
public:

	void put(jni::ref<java::lang::String> name, jboolean val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jbyte val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jchar val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jshort val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jint val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jfloat val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jlong val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jdouble val) { return call_method<"put", void>(name, val); }
	void put(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> val) { return call_method<"put", void>(name, val); }
	void write(jni::ref<java::io::ObjectOutput> out) { return call_method<"write", void>(out); }

protected:

	ObjectOutputStream_PutFieldImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELDIMPL