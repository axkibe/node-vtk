/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkExpandSelectedGraphWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkExpandSelectedGraphWrap::ptpl;

VtkExpandSelectedGraphWrap::VtkExpandSelectedGraphWrap()
{ }

VtkExpandSelectedGraphWrap::VtkExpandSelectedGraphWrap(vtkSmartPointer<vtkExpandSelectedGraph> _native)
{ native = _native; }

VtkExpandSelectedGraphWrap::~VtkExpandSelectedGraphWrap()
{ }

void VtkExpandSelectedGraphWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkExpandSelectedGraph").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ExpandSelectedGraph").ToLocalChecked(), ConstructorGetter);
}

void VtkExpandSelectedGraphWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkExpandSelectedGraphWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSelectionAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSelectionAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkExpandSelectedGraphWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetBFSDistance", GetBFSDistance);
	Nan::SetPrototypeMethod(tpl, "getBFSDistance", GetBFSDistance);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDomain", GetDomain);
	Nan::SetPrototypeMethod(tpl, "getDomain", GetDomain);

	Nan::SetPrototypeMethod(tpl, "IncludeShortestPathsOff", IncludeShortestPathsOff);
	Nan::SetPrototypeMethod(tpl, "includeShortestPathsOff", IncludeShortestPathsOff);

	Nan::SetPrototypeMethod(tpl, "IncludeShortestPathsOn", IncludeShortestPathsOn);
	Nan::SetPrototypeMethod(tpl, "includeShortestPathsOn", IncludeShortestPathsOn);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBFSDistance", SetBFSDistance);
	Nan::SetPrototypeMethod(tpl, "setBFSDistance", SetBFSDistance);

	Nan::SetPrototypeMethod(tpl, "SetDomain", SetDomain);
	Nan::SetPrototypeMethod(tpl, "setDomain", SetDomain);

	Nan::SetPrototypeMethod(tpl, "SetGraphConnection", SetGraphConnection);
	Nan::SetPrototypeMethod(tpl, "setGraphConnection", SetGraphConnection);

	Nan::SetPrototypeMethod(tpl, "UseDomainOff", UseDomainOff);
	Nan::SetPrototypeMethod(tpl, "useDomainOff", UseDomainOff);

	Nan::SetPrototypeMethod(tpl, "UseDomainOn", UseDomainOn);
	Nan::SetPrototypeMethod(tpl, "useDomainOn", UseDomainOn);

	ptpl.Reset( tpl );
}

void VtkExpandSelectedGraphWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExpandSelectedGraph> native = vtkSmartPointer<vtkExpandSelectedGraph>::New();
		VtkExpandSelectedGraphWrap* obj = new VtkExpandSelectedGraphWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExpandSelectedGraphWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExpandSelectedGraphWrap::GetBFSDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBFSDistance();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkExpandSelectedGraphWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExpandSelectedGraphWrap::GetDomain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDomain();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExpandSelectedGraphWrap::IncludeShortestPathsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeShortestPathsOff();
}

void VtkExpandSelectedGraphWrap::IncludeShortestPathsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->IncludeShortestPathsOn();
}

void VtkExpandSelectedGraphWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
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

void VtkExpandSelectedGraphWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	vtkExpandSelectedGraph * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkExpandSelectedGraphWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExpandSelectedGraphWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExpandSelectedGraphWrap *w = new VtkExpandSelectedGraphWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExpandSelectedGraphWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExpandSelectedGraph * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkExpandSelectedGraphWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkExpandSelectedGraphWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExpandSelectedGraphWrap *w = new VtkExpandSelectedGraphWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExpandSelectedGraphWrap::SetBFSDistance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetBFSDistance(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExpandSelectedGraphWrap::SetDomain(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDomain(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExpandSelectedGraphWrap::SetGraphConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGraphConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExpandSelectedGraphWrap::UseDomainOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDomainOff();
}

void VtkExpandSelectedGraphWrap::UseDomainOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExpandSelectedGraphWrap *wrapper = ObjectWrap::Unwrap<VtkExpandSelectedGraphWrap>(info.Holder());
	vtkExpandSelectedGraph *native = (vtkExpandSelectedGraph *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseDomainOn();
}
