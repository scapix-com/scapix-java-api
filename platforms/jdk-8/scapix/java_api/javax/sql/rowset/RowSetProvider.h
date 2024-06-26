// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::sql::rowset { class RowSetProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::sql::rowset::RowSetProvider>
{
	static constexpr fixed_string class_name = "javax/sql/rowset/RowSetProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER)
#define SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/sql/rowset/RowSetFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::sql::rowset::RowSetProvider : public jni::object_base<"javax/sql/rowset/RowSetProvider",
	java::lang::Object>
{
public:

	static jni::ref<javax::sql::rowset::RowSetFactory> newFactory() { return call_static_method<"newFactory", jni::ref<javax::sql::rowset::RowSetFactory>>(); }
	static jni::ref<javax::sql::rowset::RowSetFactory> newFactory(jni::ref<java::lang::String> p1, jni::ref<java::lang::ClassLoader> p2) { return call_static_method<"newFactory", jni::ref<javax::sql::rowset::RowSetFactory>>(p1, p2); }

protected:

	RowSetProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SQL_ROWSET_ROWSETPROVIDER
