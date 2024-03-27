// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class ExceptionList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::ExceptionList>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/ExceptionList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::ExceptionList : public jni::object_base<"org/omg/CORBA/ExceptionList",
	java::lang::Object>
{
public:

	static jni::ref<org::omg::CORBA::ExceptionList> new_object() { return base_::new_object(); }
	jint count() { return call_method<"count", jint>(); }
	void add(jni::ref<org::omg::CORBA::TypeCode> p1) { return call_method<"add", void>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> item(jint p1) { return call_method<"item", jni::ref<org::omg::CORBA::TypeCode>>(p1); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }

protected:

	ExceptionList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_EXCEPTIONLIST