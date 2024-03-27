// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/FileNameMap.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class MimeTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::MimeTable>
{
	static constexpr fixed_string class_name = "sun/net/www/MimeTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::net::FileNameMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE)
#define SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/sun/net/www/MimeEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::MimeTable : public jni::object_base<"sun/net/www/MimeTable",
	java::lang::Object,
	java::net::FileNameMap>
{
public:

	static jni::ref<sun::net::www::MimeTable> getDefaultTable() { return call_static_method<"getDefaultTable", jni::ref<sun::net::www::MimeTable>>(); }
	static jni::ref<java::net::FileNameMap> loadTable() { return call_static_method<"loadTable", jni::ref<java::net::FileNameMap>>(); }
	jint getSize() { return call_method<"getSize", jint>(); }
	jni::ref<java::lang::String> getContentTypeFor(jni::ref<java::lang::String> p1) { return call_method<"getContentTypeFor", jni::ref<java::lang::String>>(p1); }
	void add(jni::ref<sun::net::www::MimeEntry> p1) { return call_method<"add", void>(p1); }
	jni::ref<sun::net::www::MimeEntry> remove(jni::ref<java::lang::String> p1) { return call_method<"remove", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<sun::net::www::MimeEntry> remove(jni::ref<sun::net::www::MimeEntry> p1) { return call_method<"remove", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<sun::net::www::MimeEntry> find(jni::ref<java::lang::String> p1) { return call_method<"find", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<sun::net::www::MimeEntry> findByFileName(jni::ref<java::lang::String> p1) { return call_method<"findByFileName", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<sun::net::www::MimeEntry> findByExt(jni::ref<java::lang::String> p1) { return call_method<"findByExt", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<sun::net::www::MimeEntry> findByDescription(jni::ref<java::lang::String> p1) { return call_method<"findByDescription", jni::ref<sun::net::www::MimeEntry>>(p1); }
	jni::ref<java::util::Enumeration> elements() { return call_method<"elements", jni::ref<java::util::Enumeration>>(); }
	void load() { return call_method<"load", void>(); }
	jboolean save(jni::ref<java::lang::String> p1) { return call_method<"save", jboolean>(p1); }
	jni::ref<java::util::Properties> getAsProperties() { return call_method<"getAsProperties", jni::ref<java::util::Properties>>(); }

protected:

	MimeTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_MIMETABLE