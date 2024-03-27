// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/sql/rowset/CachedRowSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset { class WebRowSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::WebRowSet>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/WebRowSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::sql::rowset::CachedRowSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/sql/ResultSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::WebRowSet : public jni::object_base<"javax/sql/rowset/WebRowSet",
	java::lang::Object,
	javax::sql::rowset::CachedRowSet>
{
public:

	static jni::ref<java::lang::String> PUBLIC_XML_SCHEMA() { return get_static_field<"PUBLIC_XML_SCHEMA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCHEMA_SYSTEM_ID() { return get_static_field<"SCHEMA_SYSTEM_ID", jni::ref<java::lang::String>>(); }

	void readXml(jni::ref<java::io::Reader> p1) { return call_method<"readXml", void>(p1); }
	void readXml(jni::ref<java::io::InputStream> p1) { return call_method<"readXml", void>(p1); }
	void writeXml(jni::ref<java::sql::ResultSet> p1, jni::ref<java::io::Writer> p2) { return call_method<"writeXml", void>(p1, p2); }
	void writeXml(jni::ref<java::sql::ResultSet> p1, jni::ref<java::io::OutputStream> p2) { return call_method<"writeXml", void>(p1, p2); }
	void writeXml(jni::ref<java::io::Writer> p1) { return call_method<"writeXml", void>(p1); }
	void writeXml(jni::ref<java::io::OutputStream> p1) { return call_method<"writeXml", void>(p1); }

protected:

	WebRowSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_WEBROWSET