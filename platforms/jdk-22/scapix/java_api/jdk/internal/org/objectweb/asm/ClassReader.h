// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class ClassReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::ClassReader>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/ClassReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/ClassVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::ClassReader : public jni::object_base<"jdk/internal/org/objectweb/asm/ClassReader",
	java::lang::Object>
{
public:

	static jint SKIP_CODE() { return get_static_field<"SKIP_CODE", jint>(); }
	static jint SKIP_DEBUG() { return get_static_field<"SKIP_DEBUG", jint>(); }
	static jint SKIP_FRAMES() { return get_static_field<"SKIP_FRAMES", jint>(); }
	static jint EXPAND_FRAMES() { return get_static_field<"EXPAND_FRAMES", jint>(); }
	jni::ref<jni::array<jbyte>> b() { return get_field<"b", jni::ref<jni::array<jbyte>>>(); }
	jint header() { return get_field<"header", jint>(); }

	static jni::ref<jdk::internal::org::objectweb::asm_::ClassReader> new_object(jni::ref<jni::array<jbyte>> classFile) { return base_::new_object(classFile); }
	static jni::ref<jdk::internal::org::objectweb::asm_::ClassReader> new_object(jni::ref<jni::array<jbyte>> classFileBuffer, jint classFileOffset, jint classFileLength) { return base_::new_object(classFileBuffer, classFileOffset, classFileLength); }
	static jni::ref<jdk::internal::org::objectweb::asm_::ClassReader> new_object(jni::ref<java::io::InputStream> inputStream) { return base_::new_object(inputStream); }
	static jni::ref<jdk::internal::org::objectweb::asm_::ClassReader> new_object(jni::ref<java::lang::String> className) { return base_::new_object(className); }
	jint getAccess() { return call_method<"getAccess", jint>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSuperName() { return call_method<"getSuperName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getInterfaces() { return call_method<"getInterfaces", jni::ref<jni::array<java::lang::String>>>(); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::ClassVisitor> classVisitor, jint parsingOptions) { return call_method<"accept", void>(classVisitor, parsingOptions); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::ClassVisitor> classVisitor, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Attribute>> attributePrototypes, jint parsingOptions) { return call_method<"accept", void>(classVisitor, attributePrototypes, parsingOptions); }
	jint getItemCount() { return call_method<"getItemCount", jint>(); }
	jint getItem(jint constantPoolEntryIndex) { return call_method<"getItem", jint>(constantPoolEntryIndex); }
	jint getMaxStringLength() { return call_method<"getMaxStringLength", jint>(); }
	jint readByte(jint offset) { return call_method<"readByte", jint>(offset); }
	jint readUnsignedShort(jint offset) { return call_method<"readUnsignedShort", jint>(offset); }
	jshort readShort(jint offset) { return call_method<"readShort", jshort>(offset); }
	jint readInt(jint offset) { return call_method<"readInt", jint>(offset); }
	jlong readLong(jint offset) { return call_method<"readLong", jlong>(offset); }
	jni::ref<java::lang::String> readUTF8(jint offset, jni::ref<jni::array<jchar>> charBuffer) { return call_method<"readUTF8", jni::ref<java::lang::String>>(offset, charBuffer); }
	jni::ref<java::lang::String> readClass(jint offset, jni::ref<jni::array<jchar>> charBuffer) { return call_method<"readClass", jni::ref<java::lang::String>>(offset, charBuffer); }
	jni::ref<java::lang::String> readModule(jint offset, jni::ref<jni::array<jchar>> charBuffer) { return call_method<"readModule", jni::ref<java::lang::String>>(offset, charBuffer); }
	jni::ref<java::lang::String> readPackage(jint offset, jni::ref<jni::array<jchar>> charBuffer) { return call_method<"readPackage", jni::ref<java::lang::String>>(offset, charBuffer); }
	jni::ref<java::lang::Object> readConst(jint constantPoolEntryIndex, jni::ref<jni::array<jchar>> charBuffer) { return call_method<"readConst", jni::ref<java::lang::Object>>(constantPoolEntryIndex, charBuffer); }

protected:

	ClassReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_CLASSREADER
