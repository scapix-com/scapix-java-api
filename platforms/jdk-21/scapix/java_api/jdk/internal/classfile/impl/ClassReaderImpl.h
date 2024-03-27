// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/ClassReader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class ClassReaderImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::ClassReaderImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/ClassReaderImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::ClassReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MethodHandleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/NameAndTypeEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PackageEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PoolEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/AbstractPoolEntry_Utf8EntryImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/BootstrapMethodEntryImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/Options.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::ClassReaderImpl : public jni::object_base<"jdk/internal/classfile/impl/ClassReaderImpl",
	java::lang::Object,
	jdk::internal::classfile::ClassReader>
{
public:

	jni::ref<jdk::internal::classfile::impl::Options> options() { return call_method<"options", jni::ref<jdk::internal::classfile::impl::Options>>(); }
	jni::ref<java::util::function::Function> customAttributes() { return call_method<"customAttributes", jni::ref<java::util::function::Function>>(); }
	jint entryCount() { return call_method<"entryCount", jint>(); }
	jint flags() { return call_method<"flags", jint>(); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> thisClassEntry() { return call_method<"thisClassEntry", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(); }
	jni::ref<java::util::Optional> superclassEntry() { return call_method<"superclassEntry", jni::ref<java::util::Optional>>(); }
	jint thisClassPos() { return call_method<"thisClassPos", jint>(); }
	jint classfileLength() { return call_method<"classfileLength", jint>(); }
	jint bootstrapMethodCount() { return call_method<"bootstrapMethodCount", jint>(); }
	jni::ref<jdk::internal::classfile::impl::BootstrapMethodEntryImpl> bootstrapMethodEntry(jint index) { return call_method<"bootstrapMethodEntry", jni::ref<jdk::internal::classfile::impl::BootstrapMethodEntryImpl>>(index); }
	jint readU1(jint p) { return call_method<"readU1", jint>(p); }
	jint readU2(jint p) { return call_method<"readU2", jint>(p); }
	jint readS1(jint p) { return call_method<"readS1", jint>(p); }
	jint readS2(jint p) { return call_method<"readS2", jint>(p); }
	jint readInt(jint p) { return call_method<"readInt", jint>(p); }
	jlong readLong(jint p) { return call_method<"readLong", jlong>(p); }
	jfloat readFloat(jint p) { return call_method<"readFloat", jfloat>(p); }
	jdouble readDouble(jint p) { return call_method<"readDouble", jdouble>(p); }
	jni::ref<jni::array<jbyte>> readBytes(jint p, jint len) { return call_method<"readBytes", jni::ref<jni::array<jbyte>>>(p, len); }
	void copyBytesTo(jni::ref<jdk::internal::classfile::BufWriter> buf, jint p, jint len) { return call_method<"copyBytesTo", void>(buf, p, len); }
	jni::ref<jdk::internal::classfile::constantpool::PoolEntry> entryByIndex(jint index) { return call_method<"entryByIndex", jni::ref<jdk::internal::classfile::constantpool::PoolEntry>>(index); }
	jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl> utf8EntryByIndex(jint index) { return call_method<"utf8EntryByIndex", jni::ref<jdk::internal::classfile::impl::AbstractPoolEntry_Utf8EntryImpl>>(index); }
	jint skipAttributeHolder(jint offset) { return call_method<"skipAttributeHolder", jint>(offset); }
	jni::ref<jdk::internal::classfile::constantpool::PoolEntry> readEntry(jint pos) { return call_method<"readEntry", jni::ref<jdk::internal::classfile::constantpool::PoolEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::PoolEntry> readEntryOrNull(jint pos) { return call_method<"readEntryOrNull", jni::ref<jdk::internal::classfile::constantpool::PoolEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> readUtf8Entry(jint pos) { return call_method<"readUtf8Entry", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> readUtf8EntryOrNull(jint pos) { return call_method<"readUtf8EntryOrNull", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> readModuleEntry(jint pos) { return call_method<"readModuleEntry", jni::ref<jdk::internal::classfile::constantpool::ModuleEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::PackageEntry> readPackageEntry(jint pos) { return call_method<"readPackageEntry", jni::ref<jdk::internal::classfile::constantpool::PackageEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> readClassEntry(jint pos) { return call_method<"readClassEntry", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> readNameAndTypeEntry(jint pos) { return call_method<"readNameAndTypeEntry", jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry>>(pos); }
	jni::ref<jdk::internal::classfile::constantpool::MethodHandleEntry> readMethodHandleEntry(jint pos) { return call_method<"readMethodHandleEntry", jni::ref<jdk::internal::classfile::constantpool::MethodHandleEntry>>(pos); }
	jboolean compare(jni::ref<jdk::internal::classfile::BufWriter> bufWriter, jint bufWriterOffset, jint classReaderOffset, jint length) { return call_method<"compare", jboolean>(bufWriter, bufWriterOffset, classReaderOffset, length); }

protected:

	ClassReaderImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_CLASSREADERIMPL