// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class AbstractConstantGroup_AsIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::AbstractConstantGroup_AsIterator>
{
	static constexpr fixed_string class_name = "java/lang/invoke/AbstractConstantGroup$AsIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::AbstractConstantGroup_AsIterator : public jni::object_base<"java/lang/invoke/AbstractConstantGroup$AsIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }

protected:

	AbstractConstantGroup_AsIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_ABSTRACTCONSTANTGROUP_ASITERATOR
