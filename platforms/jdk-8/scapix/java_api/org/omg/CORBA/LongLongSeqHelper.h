// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER_FWD
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::omg::CORBA { class LongLongSeqHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::omg::CORBA::LongLongSeqHelper>
{
	static constexpr fixed_string class_name = "org/omg/CORBA/LongLongSeqHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER)
#define SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/Any.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::omg::CORBA::LongLongSeqHelper : public jni::object_base<"org/omg/CORBA/LongLongSeqHelper",
	java::lang::Object>
{
public:

	static jni::ref<org::omg::CORBA::LongLongSeqHelper> new_object() { return base_::new_object(); }
	static void insert(jni::ref<org::omg::CORBA::Any> p1, jni::ref<jni::array<jlong>> p2) { return call_static_method<"insert", void>(p1, p2); }
	static jni::ref<jni::array<jlong>> extract(jni::ref<org::omg::CORBA::Any> p1) { return call_static_method<"extract", jni::ref<jni::array<jlong>>>(p1); }
	static jni::ref<org::omg::CORBA::TypeCode> type() { return call_static_method<"type", jni::ref<org::omg::CORBA::TypeCode>>(); }
	static jni::ref<java::lang::String> id() { return call_static_method<"id", jni::ref<java::lang::String>>(); }
	static jni::ref<jni::array<jlong>> read(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_static_method<"read", jni::ref<jni::array<jlong>>>(p1); }
	static void write(jni::ref<org::omg::CORBA::portable::OutputStream> p1, jni::ref<jni::array<jlong>> p2) { return call_static_method<"write", void>(p1, p2); }

protected:

	LongLongSeqHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_OMG_CORBA_LONGLONGSEQHELPER
