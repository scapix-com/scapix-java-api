// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class BufWriterImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::BufWriterImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/BufWriterImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::BufWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPool.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ConstantPoolBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/PoolEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/LabelContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::BufWriterImpl : public jni::object_base<"jdk/internal/classfile/impl/BufWriterImpl",
	java::lang::Object,
	jdk::internal::classfile::BufWriter>
{
public:

	static jni::ref<jdk::internal::classfile::impl::BufWriterImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool) { return base_::new_object(constantPool); }
	static jni::ref<jdk::internal::classfile::impl::BufWriterImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool, jint initialSize) { return base_::new_object(constantPool, initialSize); }
	static jni::ref<jdk::internal::classfile::impl::BufWriterImpl> new_object(jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool, jint initialSize, jni::ref<jdk::internal::classfile::constantpool::ClassEntry> thisClass, jint majorVersion) { return base_::new_object(constantPool, initialSize, thisClass, majorVersion); }
	jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder> constantPool() { return call_method<"constantPool", jni::ref<jdk::internal::classfile::constantpool::ConstantPoolBuilder>>(); }
	jni::ref<jdk::internal::classfile::impl::LabelContext> labelContext() { return call_method<"labelContext", jni::ref<jdk::internal::classfile::impl::LabelContext>>(); }
	void setLabelContext(jni::ref<jdk::internal::classfile::impl::LabelContext> labelContext) { return call_method<"setLabelContext", void>(labelContext); }
	jboolean canWriteDirect(jni::ref<jdk::internal::classfile::constantpool::ConstantPool> other) { return call_method<"canWriteDirect", jboolean>(other); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> thisClass() { return call_method<"thisClass", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(); }
	jint getMajorVersion() { return call_method<"getMajorVersion", jint>(); }
	void writeU1(jint x) { return call_method<"writeU1", void>(x); }
	void writeU2(jint x) { return call_method<"writeU2", void>(x); }
	void writeInt(jint x) { return call_method<"writeInt", void>(x); }
	void writeFloat(jfloat x) { return call_method<"writeFloat", void>(x); }
	void writeLong(jlong x) { return call_method<"writeLong", void>(x); }
	void writeDouble(jdouble x) { return call_method<"writeDouble", void>(x); }
	void writeBytes(jni::ref<jni::array<jbyte>> arr) { return call_method<"writeBytes", void>(arr); }
	void writeBytes(jni::ref<jdk::internal::classfile::BufWriter> other) { return call_method<"writeBytes", void>(other); }
	void writeBytes(jni::ref<jni::array<jbyte>> arr, jint start, jint length) { return call_method<"writeBytes", void>(arr, start, length); }
	void patchInt(jint offset, jint size, jint value) { return call_method<"patchInt", void>(offset, size, value); }
	void writeIntBytes(jint intSize, jlong intValue) { return call_method<"writeIntBytes", void>(intSize, intValue); }
	void reserveSpace(jint freeBytes) { return call_method<"reserveSpace", void>(freeBytes); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::nio::ByteBuffer> asByteBuffer() { return call_method<"asByteBuffer", jni::ref<java::nio::ByteBuffer>>(); }
	void copyTo(jni::ref<jni::array<jbyte>> array, jint bufferOffset) { return call_method<"copyTo", void>(array, bufferOffset); }
	void writeIndex(jni::ref<jdk::internal::classfile::constantpool::PoolEntry> entry) { return call_method<"writeIndex", void>(entry); }
	void writeIndexOrZero(jni::ref<jdk::internal::classfile::constantpool::PoolEntry> entry) { return call_method<"writeIndexOrZero", void>(entry); }
	void writeList(jni::ref<java::util::List> list) { return call_method<"writeList", void>(list); }
	void writeListIndices(jni::ref<java::util::List> list) { return call_method<"writeListIndices", void>(list); }

protected:

	BufWriterImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_BUFWRITERIMPL
