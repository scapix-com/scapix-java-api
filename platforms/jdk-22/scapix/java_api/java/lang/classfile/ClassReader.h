// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ConstantPool.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class ClassReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::ClassReader>
{
	static constexpr fixed_string class_name = "java/lang/classfile/ClassReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::constantpool::ConstantPool>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/classfile/BufWriter.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/MethodHandleEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/NameAndTypeEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/PackageEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/PoolEntry.h>
#include <scapix/java_api/java/lang/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::ClassReader : public jni::object_base<"java/lang/classfile/ClassReader",
	java::lang::Object,
	java::lang::classfile::constantpool::ConstantPool>
{
public:

	jni::ref<java::util::function::Function> customAttributes() { return call_method<"customAttributes", jni::ref<java::util::function::Function>>(); }
	jint flags() { return call_method<"flags", jint>(); }
	jni::ref<java::lang::classfile::constantpool::ClassEntry> thisClassEntry() { return call_method<"thisClassEntry", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	jni::ref<java::util::Optional> superclassEntry() { return call_method<"superclassEntry", jni::ref<java::util::Optional>>(); }
	jint thisClassPos() { return call_method<"thisClassPos", jint>(); }
	jint classfileLength() { return call_method<"classfileLength", jint>(); }
	jint skipAttributeHolder(jint p1) { return call_method<"skipAttributeHolder", jint>(p1); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> utf8EntryByIndex(jint p1) { return call_method<"utf8EntryByIndex", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::PoolEntry> readEntry(jint p1) { return call_method<"readEntry", jni::ref<java::lang::classfile::constantpool::PoolEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::PoolEntry> readEntry(jint p1, jni::ref<java::lang::Class> p2) { return call_method<"readEntry", jni::ref<java::lang::classfile::constantpool::PoolEntry>>(p1, p2); }
	jni::ref<java::lang::classfile::constantpool::PoolEntry> readEntryOrNull(jint p1) { return call_method<"readEntryOrNull", jni::ref<java::lang::classfile::constantpool::PoolEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> readUtf8Entry(jint p1) { return call_method<"readUtf8Entry", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::Utf8Entry> readUtf8EntryOrNull(jint p1) { return call_method<"readUtf8EntryOrNull", jni::ref<java::lang::classfile::constantpool::Utf8Entry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::ModuleEntry> readModuleEntry(jint p1) { return call_method<"readModuleEntry", jni::ref<java::lang::classfile::constantpool::ModuleEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::PackageEntry> readPackageEntry(jint p1) { return call_method<"readPackageEntry", jni::ref<java::lang::classfile::constantpool::PackageEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::ClassEntry> readClassEntry(jint p1) { return call_method<"readClassEntry", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::NameAndTypeEntry> readNameAndTypeEntry(jint p1) { return call_method<"readNameAndTypeEntry", jni::ref<java::lang::classfile::constantpool::NameAndTypeEntry>>(p1); }
	jni::ref<java::lang::classfile::constantpool::MethodHandleEntry> readMethodHandleEntry(jint p1) { return call_method<"readMethodHandleEntry", jni::ref<java::lang::classfile::constantpool::MethodHandleEntry>>(p1); }
	jint readU1(jint p1) { return call_method<"readU1", jint>(p1); }
	jint readU2(jint p1) { return call_method<"readU2", jint>(p1); }
	jint readS1(jint p1) { return call_method<"readS1", jint>(p1); }
	jint readS2(jint p1) { return call_method<"readS2", jint>(p1); }
	jint readInt(jint p1) { return call_method<"readInt", jint>(p1); }
	jlong readLong(jint p1) { return call_method<"readLong", jlong>(p1); }
	jfloat readFloat(jint p1) { return call_method<"readFloat", jfloat>(p1); }
	jdouble readDouble(jint p1) { return call_method<"readDouble", jdouble>(p1); }
	jni::ref<jni::array<jbyte>> readBytes(jint p1, jint p2) { return call_method<"readBytes", jni::ref<jni::array<jbyte>>>(p1, p2); }
	void copyBytesTo(jni::ref<java::lang::classfile::BufWriter> p1, jint p2, jint p3) { return call_method<"copyBytesTo", void>(p1, p2, p3); }
	jboolean compare(jni::ref<java::lang::classfile::BufWriter> p1, jint p2, jint p3, jint p4) { return call_method<"compare", jboolean>(p1, p2, p3, p4); }

protected:

	ClassReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CLASSREADER