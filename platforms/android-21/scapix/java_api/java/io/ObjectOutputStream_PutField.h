// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class ObjectOutputStream_PutField; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::ObjectOutputStream_PutField>
{
	static constexpr fixed_string class_name = "java/io/ObjectOutputStream$PutField";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD)
#define SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectOutput.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::ObjectOutputStream_PutField : public jni::object_base<"java/io/ObjectOutputStream$PutField",
	java::lang::Object>
{
public:

	static jni::ref<java::io::ObjectOutputStream_PutField> new_object() { return base_::new_object(); }
	void put(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jchar p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jbyte p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jshort p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jint p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jfloat p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jdouble p2) { return call_method<"put", void>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	void write(jni::ref<java::io::ObjectOutput> p1) { return call_method<"write", void>(p1); }

protected:

	ObjectOutputStream_PutField(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OBJECTOUTPUTSTREAM_PUTFIELD
