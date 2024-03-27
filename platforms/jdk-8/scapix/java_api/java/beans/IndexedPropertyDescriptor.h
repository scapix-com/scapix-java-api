// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/beans/PropertyDescriptor.h>

#ifndef SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR_FWD
#define SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::beans { class IndexedPropertyDescriptor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::beans::IndexedPropertyDescriptor>
{
	static constexpr fixed_string class_name = "java/beans/IndexedPropertyDescriptor";
	using base_classes = std::tuple<scapix::java_api::java::beans::PropertyDescriptor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR)
#define SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/reflect/Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::beans::IndexedPropertyDescriptor : public jni::object_base<"java/beans/IndexedPropertyDescriptor",
	java::beans::PropertyDescriptor>
{
public:

	static jni::ref<java::beans::IndexedPropertyDescriptor> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::beans::IndexedPropertyDescriptor> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Class> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5, jni::ref<java::lang::String> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::beans::IndexedPropertyDescriptor> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::reflect::Method> p2, jni::ref<java::lang::reflect::Method> p3, jni::ref<java::lang::reflect::Method> p4, jni::ref<java::lang::reflect::Method> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::reflect::Method> getIndexedReadMethod() { return call_method<"getIndexedReadMethod", jni::ref<java::lang::reflect::Method>>(); }
	void setIndexedReadMethod(jni::ref<java::lang::reflect::Method> p1) { return call_method<"setIndexedReadMethod", void>(p1); }
	jni::ref<java::lang::reflect::Method> getIndexedWriteMethod() { return call_method<"getIndexedWriteMethod", jni::ref<java::lang::reflect::Method>>(); }
	void setIndexedWriteMethod(jni::ref<java::lang::reflect::Method> p1) { return call_method<"setIndexedWriteMethod", void>(p1); }
	jni::ref<java::lang::Class> getIndexedPropertyType() { return call_method<"getIndexedPropertyType", jni::ref<java::lang::Class>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	IndexedPropertyDescriptor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_BEANS_INDEXEDPROPERTYDESCRIPTOR
