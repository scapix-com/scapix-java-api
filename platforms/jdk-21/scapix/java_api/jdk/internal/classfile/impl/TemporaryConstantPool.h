// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TemporaryConstantPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TemporaryConstantPool>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TemporaryConstantPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::constantpool::ConstantPoolBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/BootstrapMethodEntry.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantDynamicEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPool.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/DoubleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/FieldRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/FloatEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/IntegerEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/InterfaceMethodRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/InvokeDynamicEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/LongEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MemberRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MethodHandleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MethodRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MethodTypeEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ModuleEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/NameAndTypeEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PackageEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PoolEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/StringEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TemporaryConstantPool : public jni::object_base<"jdk/internal/classfile/impl/TemporaryConstantPool",
	java::lang::Object,
	jdk::internal::classfile::constantpool::ConstantPoolBuilder>
{
public:

	static jni::ref<jdk::internal::classfile::impl::TemporaryConstantPool> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<jdk::internal::classfile::impl::TemporaryConstantPool>>(); }

	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> utf8Entry(jni::ref<java::lang::String> s) { return call_method<"utf8Entry", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(s); }
	jni::ref<jdk::internal::classfile::constantpool::IntegerEntry> intEntry(jint value) { return call_method<"intEntry", jni::ref<jdk::internal::classfile::constantpool::IntegerEntry>>(value); }
	jni::ref<jdk::internal::classfile::constantpool::FloatEntry> floatEntry(jfloat value) { return call_method<"floatEntry", jni::ref<jdk::internal::classfile::constantpool::FloatEntry>>(value); }
	jni::ref<jdk::internal::classfile::constantpool::LongEntry> longEntry(jlong value) { return call_method<"longEntry", jni::ref<jdk::internal::classfile::constantpool::LongEntry>>(value); }
	jni::ref<jdk::internal::classfile::constantpool::DoubleEntry> doubleEntry(jdouble value) { return call_method<"doubleEntry", jni::ref<jdk::internal::classfile::constantpool::DoubleEntry>>(value); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> classEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name) { return call_method<"classEntry", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(name); }
	jni::ref<jdk::internal::classfile::constantpool::PackageEntry> packageEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name) { return call_method<"packageEntry", jni::ref<jdk::internal::classfile::constantpool::PackageEntry>>(name); }
	jni::ref<jdk::internal::classfile::constantpool::ModuleEntry> moduleEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name) { return call_method<"moduleEntry", jni::ref<jdk::internal::classfile::constantpool::ModuleEntry>>(name); }
	jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndTypeEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> nameEntry, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> typeEntry) { return call_method<"nameAndTypeEntry", jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry>>(nameEntry, typeEntry); }
	jni::ref<jdk::internal::classfile::constantpool::FieldRefEntry> fieldRefEntry(jni::ref<jdk::internal::classfile::constantpool::ClassEntry> owner, jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndType) { return call_method<"fieldRefEntry", jni::ref<jdk::internal::classfile::constantpool::FieldRefEntry>>(owner, nameAndType); }
	jni::ref<jdk::internal::classfile::constantpool::MethodRefEntry> methodRefEntry(jni::ref<jdk::internal::classfile::constantpool::ClassEntry> owner, jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndType) { return call_method<"methodRefEntry", jni::ref<jdk::internal::classfile::constantpool::MethodRefEntry>>(owner, nameAndType); }
	jni::ref<jdk::internal::classfile::constantpool::InterfaceMethodRefEntry> interfaceMethodRefEntry(jni::ref<jdk::internal::classfile::constantpool::ClassEntry> owner, jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndType) { return call_method<"interfaceMethodRefEntry", jni::ref<jdk::internal::classfile::constantpool::InterfaceMethodRefEntry>>(owner, nameAndType); }
	jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry> methodTypeEntry(jni::ref<java::lang::constant::MethodTypeDesc> descriptor) { return call_method<"methodTypeEntry", jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry>>(descriptor); }
	jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry> methodTypeEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptor) { return call_method<"methodTypeEntry", jni::ref<jdk::internal::classfile::constantpool::MethodTypeEntry>>(descriptor); }
	jni::ref<jdk::internal::classfile::constantpool::MethodHandleEntry> methodHandleEntry(jint refKind, jni::ref<jdk::internal::classfile::constantpool::MemberRefEntry> reference) { return call_method<"methodHandleEntry", jni::ref<jdk::internal::classfile::constantpool::MethodHandleEntry>>(refKind, reference); }
	jni::ref<jdk::internal::classfile::constantpool::InvokeDynamicEntry> invokeDynamicEntry(jni::ref<jdk::internal::classfile::BootstrapMethodEntry> bootstrapMethodEntry, jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndType) { return call_method<"invokeDynamicEntry", jni::ref<jdk::internal::classfile::constantpool::InvokeDynamicEntry>>(bootstrapMethodEntry, nameAndType); }
	jni::ref<jdk::internal::classfile::constantpool::ConstantDynamicEntry> constantDynamicEntry(jni::ref<jdk::internal::classfile::BootstrapMethodEntry> bootstrapMethodEntry, jni::ref<jdk::internal::classfile::constantpool::NameAndTypeEntry> nameAndType) { return call_method<"constantDynamicEntry", jni::ref<jdk::internal::classfile::constantpool::ConstantDynamicEntry>>(bootstrapMethodEntry, nameAndType); }
	jni::ref<jdk::internal::classfile::constantpool::StringEntry> stringEntry(jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> utf8) { return call_method<"stringEntry", jni::ref<jdk::internal::classfile::constantpool::StringEntry>>(utf8); }
	jni::ref<jdk::internal::classfile::BootstrapMethodEntry> bsmEntry(jni::ref<jdk::internal::classfile::constantpool::MethodHandleEntry> methodReference, jni::ref<java::util::List> arguments) { return call_method<"bsmEntry", jni::ref<jdk::internal::classfile::BootstrapMethodEntry>>(methodReference, arguments); }
	jni::ref<jdk::internal::classfile::constantpool::PoolEntry> entryByIndex(jint index) { return call_method<"entryByIndex", jni::ref<jdk::internal::classfile::constantpool::PoolEntry>>(index); }
	jint entryCount() { return call_method<"entryCount", jint>(); }
	jni::ref<jdk::internal::classfile::BootstrapMethodEntry> bootstrapMethodEntry(jint index) { return call_method<"bootstrapMethodEntry", jni::ref<jdk::internal::classfile::BootstrapMethodEntry>>(index); }
	jint bootstrapMethodCount() { return call_method<"bootstrapMethodCount", jint>(); }
	jboolean canWriteDirect(jni::ref<jdk::internal::classfile::constantpool::ConstantPool> constantPool) { return call_method<"canWriteDirect", jboolean>(constantPool); }
	jboolean writeBootstrapMethods(jni::ref<jdk::internal::classfile::BufWriter> buf) { return call_method<"writeBootstrapMethods", jboolean>(buf); }
	void writeTo(jni::ref<jdk::internal::classfile::BufWriter> buf) { return call_method<"writeTo", void>(buf); }

protected:

	TemporaryConstantPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TEMPORARYCONSTANTPOOL
