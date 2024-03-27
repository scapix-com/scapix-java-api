// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/orbutil/ObjectWriter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class ObjectWriter_IndentingObjectWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::ObjectWriter_IndentingObjectWriter>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/ObjectWriter$IndentingObjectWriter";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::orbutil::ObjectWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::orbutil::ObjectWriter_IndentingObjectWriter : public jni::object_base<"com/sun/corba/se/impl/orbutil/ObjectWriter$IndentingObjectWriter",
	com::sun::corba::se::impl::orbutil::ObjectWriter>
{
public:

	static jni::ref<com::sun::corba::se::impl::orbutil::ObjectWriter_IndentingObjectWriter> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	void startObject(jni::ref<java::lang::Object> p1) { return call_method<"startObject", void>(p1); }
	void startElement() { return call_method<"startElement", void>(); }
	void endElement() { return call_method<"endElement", void>(); }
	void endObject(jni::ref<java::lang::String> p1) { return call_method<"endObject", void>(p1); }
	void endObject() { return call_method<"endObject", void>(); }

protected:

	ObjectWriter_IndentingObjectWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_OBJECTWRITER_INDENTINGOBJECTWRITER
