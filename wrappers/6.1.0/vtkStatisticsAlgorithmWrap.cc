/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkStringArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkStatisticsAlgorithmWrap::ptpl;

VtkStatisticsAlgorithmWrap::VtkStatisticsAlgorithmWrap()
{ }

VtkStatisticsAlgorithmWrap::VtkStatisticsAlgorithmWrap(vtkSmartPointer<vtkStatisticsAlgorithm> _native)
{ native = _native; }

VtkStatisticsAlgorithmWrap::~VtkStatisticsAlgorithmWrap()
{ }

void VtkStatisticsAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkStatisticsAlgorithm").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("StatisticsAlgorithm").ToLocalChecked(), ConstructorGetter);
}

void VtkStatisticsAlgorithmWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkStatisticsAlgorithmWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkStatisticsAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddColumn", AddColumn);
	Nan::SetPrototypeMethod(tpl, "addColumn", AddColumn);

	Nan::SetPrototypeMethod(tpl, "AddColumnPair", AddColumnPair);
	Nan::SetPrototypeMethod(tpl, "addColumnPair", AddColumnPair);

	Nan::SetPrototypeMethod(tpl, "GetAssessNames", GetAssessNames);
	Nan::SetPrototypeMethod(tpl, "getAssessNames", GetAssessNames);

	Nan::SetPrototypeMethod(tpl, "GetAssessOption", GetAssessOption);
	Nan::SetPrototypeMethod(tpl, "getAssessOption", GetAssessOption);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDeriveOption", GetDeriveOption);
	Nan::SetPrototypeMethod(tpl, "getDeriveOption", GetDeriveOption);

	Nan::SetPrototypeMethod(tpl, "GetLearnOption", GetLearnOption);
	Nan::SetPrototypeMethod(tpl, "getLearnOption", GetLearnOption);

	Nan::SetPrototypeMethod(tpl, "GetTestOption", GetTestOption);
	Nan::SetPrototypeMethod(tpl, "getTestOption", GetTestOption);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RequestSelectedColumns", RequestSelectedColumns);
	Nan::SetPrototypeMethod(tpl, "requestSelectedColumns", RequestSelectedColumns);

	Nan::SetPrototypeMethod(tpl, "ResetAllColumnStates", ResetAllColumnStates);
	Nan::SetPrototypeMethod(tpl, "resetAllColumnStates", ResetAllColumnStates);

	Nan::SetPrototypeMethod(tpl, "ResetRequests", ResetRequests);
	Nan::SetPrototypeMethod(tpl, "resetRequests", ResetRequests);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAssessNames", SetAssessNames);
	Nan::SetPrototypeMethod(tpl, "setAssessNames", SetAssessNames);

	Nan::SetPrototypeMethod(tpl, "SetAssessOption", SetAssessOption);
	Nan::SetPrototypeMethod(tpl, "setAssessOption", SetAssessOption);

	Nan::SetPrototypeMethod(tpl, "SetColumnStatus", SetColumnStatus);
	Nan::SetPrototypeMethod(tpl, "setColumnStatus", SetColumnStatus);

	Nan::SetPrototypeMethod(tpl, "SetDeriveOption", SetDeriveOption);
	Nan::SetPrototypeMethod(tpl, "setDeriveOption", SetDeriveOption);

	Nan::SetPrototypeMethod(tpl, "SetInputModel", SetInputModel);
	Nan::SetPrototypeMethod(tpl, "setInputModel", SetInputModel);

	Nan::SetPrototypeMethod(tpl, "SetInputModelConnection", SetInputModelConnection);
	Nan::SetPrototypeMethod(tpl, "setInputModelConnection", SetInputModelConnection);

	Nan::SetPrototypeMethod(tpl, "SetLearnOption", SetLearnOption);
	Nan::SetPrototypeMethod(tpl, "setLearnOption", SetLearnOption);

	Nan::SetPrototypeMethod(tpl, "SetLearnOptionParameterConnection", SetLearnOptionParameterConnection);
	Nan::SetPrototypeMethod(tpl, "setLearnOptionParameterConnection", SetLearnOptionParameterConnection);

	Nan::SetPrototypeMethod(tpl, "SetLearnOptionParameters", SetLearnOptionParameters);
	Nan::SetPrototypeMethod(tpl, "setLearnOptionParameters", SetLearnOptionParameters);

	Nan::SetPrototypeMethod(tpl, "SetTestOption", SetTestOption);
	Nan::SetPrototypeMethod(tpl, "setTestOption", SetTestOption);

	ptpl.Reset( tpl );
}

void VtkStatisticsAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStatisticsAlgorithmWrap::AddColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::AddColumnPair(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsString())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddColumnPair(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::GetAssessNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAssessNames();
		VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticsAlgorithmWrap::GetAssessOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAssessOption();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStatisticsAlgorithmWrap::GetDeriveOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDeriveOption();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::GetLearnOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLearnOption();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::GetTestOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetTestOption();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	vtkStatisticsAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkStatisticsAlgorithmWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStatisticsAlgorithmWrap *w = new VtkStatisticsAlgorithmWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticsAlgorithmWrap::RequestSelectedColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequestSelectedColumns();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::ResetAllColumnStates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetAllColumnStates();
}

void VtkStatisticsAlgorithmWrap::ResetRequests(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetRequests();
}

void VtkStatisticsAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStatisticsAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkStatisticsAlgorithmWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkStatisticsAlgorithmWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStatisticsAlgorithmWrap *w = new VtkStatisticsAlgorithmWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetAssessNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAssessNames(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetAssessOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAssessOption(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetColumnStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetColumnStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetDeriveOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDeriveOption(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetInputModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputModel(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetInputModelConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputModelConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetLearnOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLearnOption(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetLearnOptionParameterConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLearnOptionParameterConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetLearnOptionParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLearnOptionParameters(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetTestOption(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTestOption(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

