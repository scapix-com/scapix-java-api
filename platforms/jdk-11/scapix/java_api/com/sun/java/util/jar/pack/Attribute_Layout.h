// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Attribute_Layout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Attribute_Layout>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Attribute$Layout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute_Holder.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute_Layout_Element.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute_ValueStream.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Version.h>
#include <scapix/java_api/java/io/ByteArrayOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Attribute_Layout : public jni::object_base<"com/sun/java/util/jar/pack/Attribute$Layout",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	using Element = Attribute_Layout_Element;

	jint ctype() { return call_method<"ctype", jint>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> layout() { return call_method<"layout", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> canonicalInstance() { return call_method<"canonicalInstance", jni::ref<com::sun::java::util::jar::pack::Attribute>>(); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getNameRef() { return call_method<"getNameRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	static jni::ref<com::sun::java::util::jar::pack::Attribute_Layout> new_object(jint ctype, jni::ref<java::lang::String> name, jni::ref<java::lang::String> layout) { return base_::new_object(ctype, name, layout); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> addContent(jni::ref<jni::array<jbyte>> bytes, jni::ref<java::lang::Object> fixups) { return call_method<"addContent", jni::ref<com::sun::java::util::jar::pack::Attribute>>(bytes, fixups); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> addContent(jni::ref<jni::array<jbyte>> bytes) { return call_method<"addContent", jni::ref<com::sun::java::util::jar::pack::Attribute>>(bytes); }
	jboolean equals(jni::ref<java::lang::Object> x) { return call_method<"equals", jboolean>(x); }
	jboolean equals(jni::ref<com::sun::java::util::jar::pack::Attribute_Layout> that) { return call_method<"equals", jboolean>(that); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<com::sun::java::util::jar::pack::Attribute_Layout> that) { return call_method<"compareTo", jint>(that); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean hasCallables() { return call_method<"hasCallables", jboolean>(); }
	jni::ref<jni::array<com::sun::java::util::jar::pack::Attribute_Layout_Element>> getCallables() { return call_method<"getCallables", jni::ref<jni::array<com::sun::java::util::jar::pack::Attribute_Layout_Element>>>(); }
	jni::ref<jni::array<com::sun::java::util::jar::pack::Attribute_Layout_Element>> getEntryPoint() { return call_method<"getEntryPoint", jni::ref<jni::array<com::sun::java::util::jar::pack::Attribute_Layout_Element>>>(); }
	void parse(jni::ref<com::sun::java::util::jar::pack::Attribute_Holder> holder, jni::ref<jni::array<jbyte>> bytes, jint pos, jint len, jni::ref<com::sun::java::util::jar::pack::Attribute_ValueStream> out) { return call_method<"parse", void>(holder, bytes, pos, len, out); }
	jni::ref<java::lang::Object> unparse(jni::ref<com::sun::java::util::jar::pack::Attribute_ValueStream> in, jni::ref<java::io::ByteArrayOutputStream> out) { return call_method<"unparse", jni::ref<java::lang::Object>>(in, out); }
	jni::ref<java::lang::String> layoutForClassVersion(jni::ref<com::sun::java::util::jar::pack::Package_Version> vers) { return call_method<"layoutForClassVersion", jni::ref<java::lang::String>>(vers); }

protected:

	Attribute_Layout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_LAYOUT
