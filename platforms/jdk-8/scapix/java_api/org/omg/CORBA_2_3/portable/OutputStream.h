// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA_2_3::portable { class OutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA_2_3::portable::OutputStream>
{
	static constexpr fixed_string class_name = "org/omg/CORBA_2_3/portable/OutputStream";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::OutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/portable/BoxedValueHelper.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA_2_3::portable::OutputStream : public jni::object_base<"org/omg/CORBA_2_3/portable/OutputStream",
	org::omg::CORBA::portable::OutputStream>
{
public:

	static jni::ref<org::omg::CORBA_2_3::portable::OutputStream> new_object() { return base_::new_object(); }
	void write_value(jni::ref<java::io::Serializable> p1) { return call_method<"write_value", void>(p1); }
	void write_value(jni::ref<java::io::Serializable> p1, jni::ref<java::lang::Class> p2) { return call_method<"write_value", void>(p1, p2); }
	void write_value(jni::ref<java::io::Serializable> p1, jni::ref<java::lang::String> p2) { return call_method<"write_value", void>(p1, p2); }
	void write_value(jni::ref<java::io::Serializable> p1, jni::ref<org::omg::CORBA::portable::BoxedValueHelper> p2) { return call_method<"write_value", void>(p1, p2); }
	void write_abstract_interface(jni::ref<java::lang::Object> p1) { return call_method<"write_abstract_interface", void>(p1); }

protected:

	OutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_2_3_PORTABLE_OUTPUTSTREAM