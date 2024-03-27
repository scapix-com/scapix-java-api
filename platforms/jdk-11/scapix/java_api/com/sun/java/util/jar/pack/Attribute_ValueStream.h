// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Attribute_ValueStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Attribute_ValueStream>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Attribute$ValueStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Attribute_ValueStream : public jni::object_base<"com/sun/java/util/jar/pack/Attribute$ValueStream",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::Attribute_ValueStream> new_object() { return base_::new_object(); }
	jint getInt(jint bandIndex) { return call_method<"getInt", jint>(bandIndex); }
	void putInt(jint bandIndex, jint value) { return call_method<"putInt", void>(bandIndex, value); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getRef(jint bandIndex) { return call_method<"getRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(bandIndex); }
	void putRef(jint bandIndex, jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> ref) { return call_method<"putRef", void>(bandIndex, ref); }
	jint decodeBCI(jint bciCode) { return call_method<"decodeBCI", jint>(bciCode); }
	jint encodeBCI(jint bci) { return call_method<"encodeBCI", jint>(bci); }
	void noteBackCall(jint whichCallable) { return call_method<"noteBackCall", void>(whichCallable); }

protected:

	Attribute_ValueStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_VALUESTREAM