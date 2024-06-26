// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/IllegalArgumentException.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::constantpool { class ConstantPoolException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::constantpool::ConstantPoolException>
{
	static constexpr fixed_string class_name = "java/lang/classfile/constantpool/ConstantPoolException";
	using base_classes = std::tuple<scapix::java_api::java::lang::IllegalArgumentException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::constantpool::ConstantPoolException : public jni::object_base<"java/lang/classfile/constantpool/ConstantPoolException",
	java::lang::IllegalArgumentException>
{
public:

	static jni::ref<java::lang::classfile::constantpool::ConstantPoolException> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::classfile::constantpool::ConstantPoolException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<java::lang::classfile::constantpool::ConstantPoolException> new_object(jni::ref<java::lang::Throwable> cause) { return base_::new_object(cause); }
	static jni::ref<java::lang::classfile::constantpool::ConstantPoolException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	ConstantPoolException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_CONSTANTPOOL_CONSTANTPOOLEXCEPTION
